//
//  POILocationVO.h
//  CycleStreets
//
//  Created by Neil Edwards on 21/10/2011.
//  Copyright (c) 2011 CycleStreets Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface POILocationVO : NSObject{
	
	NSString				*locationid;
	
	CLLocationCoordinate2D	location;
	
	NSString				*name;
	NSString				*notes;
	NSString				*website;
	
}
@property (nonatomic, retain)	NSString		*locationid;
@property (nonatomic)	CLLocationCoordinate2D		location;
@property (nonatomic, retain)	NSString		*name;
@property (nonatomic, retain)	NSString		*notes;
@property (nonatomic, retain)	NSString		*website;
@end
