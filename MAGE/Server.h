//
//  Server.h
//  mage-ios-sdk
//
//  Created by William Newman on 4/13/16.
//  Copyright © 2016 National Geospatial-Intelligence Agency. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface Server : NSManagedObject

+(NSString *) serverUrl;
+(void) setServerUrl:(NSString *) serverUrl;
+(NSNumber *) currentEventId;
+(void) setCurrentEventId:(NSNumber *) eventId;

@end

NS_ASSUME_NONNULL_END

#import "Server+CoreDataProperties.h"
