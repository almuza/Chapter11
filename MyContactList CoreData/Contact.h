//
//  Contact.h
//  MyContactList CoreData
//
//  Created by Yitref, Almaz on 5/21/14.
//  Copyright (c) 2014 Yitref, Almaz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Contact : NSManagedObject

@property (nonatomic, retain) NSString * cellNumber;
@property (nonatomic, retain) NSString * birthday;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * contactName;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * zipCode;
@property (nonatomic, retain) NSString * sreetAdress;
@property (nonatomic, retain) NSString * phoneNumber;

@end
