//
//  FavouritesManager.h
//  CycleStreets
//
//  Created by neil on 22/02/2011.
//  Copyright 2011 CycleStreets Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SynthesizeSingleton.h"
#import "RouteVO.h"

#define SAVEDROUTESARCHIVEPATH @"savedroutes"

@interface SavedRoutesManager : NSObject {
	
	NSMutableDictionary				*routeidStore; // keyed dict of favs & recents
	NSMutableArray					*favouritesdataProvider; // array of Routes use has favorited
	NSMutableArray					*recentsdataProvider; // array of all other routes, only stores x number
	
}
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(SavedRoutesManager);
@property (nonatomic, retain)	NSMutableDictionary		*routeidStore;
@property (nonatomic, retain)	NSMutableArray		*favouritesdataProvider;
@property (nonatomic, retain)	NSMutableArray		*recentsdataProvider;

-(void)removeRoute:(RouteVO*)route;
-(void)loadSavedRoutes;

@end