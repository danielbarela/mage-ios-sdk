//
//  User.h
//  mage-ios-sdk
//
//  Created by William Newman on 4/13/16.
//  Copyright © 2016 National Geospatial-Intelligence Agency. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Location, Observation, Role, Team;

NS_ASSUME_NONNULL_BEGIN

@interface User : NSManagedObject

+ (User *) insertUserForJson: (NSDictionary *) json inManagedObjectContext:(NSManagedObjectContext *) context;
+ (User *) fetchUserForId:(NSString *) userId inManagedObjectContext: (NSManagedObjectContext *) context;
+ (User *) fetchCurrentUserInManagedObjectContext:(NSManagedObjectContext *) managedObjectContext;
+ (NSOperation *) operationToFetchMyselfWithSuccess: (void(^)()) success failure: (void(^)(NSError *)) failure;
+ (NSOperation *) operationToFetchUsersWithSuccess: (void(^)()) success failure: (void(^)(NSError *)) failure;

- (void) updateUserForJson: (NSDictionary *) json;
@end

NS_ASSUME_NONNULL_END

#import "User+CoreDataProperties.h"
