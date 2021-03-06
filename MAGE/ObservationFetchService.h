//
//  ObservationFetchService.h
//  mage-ios-sdk
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

extern NSString * const kObservationFetchFrequencyKey;

@interface ObservationFetchService : NSObject

+ (instancetype) singleton;

- (void) start;
- (void) stop;

@end
