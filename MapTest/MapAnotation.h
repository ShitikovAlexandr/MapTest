//
//  MapAnotation.h
//  MapTest
//
//  Created by MacUser on 21.04.16.
//  Copyright © 2016 Shitikov.net. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MKAnnotation.h>

@interface MapAnotation : NSObject <MKAnnotation>

@property (nonatomic, assign) CLLocationCoordinate2D    coordinate;
@property (nonatomic, copy) NSString                    *title;
@property (nonatomic, copy) NSString                    *subtitle;


@end
