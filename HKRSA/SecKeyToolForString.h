//
//  SecKeyToolForString.h
//  MicaLife
//
//  Created by mac on 2019/6/26.
//  Copyright © 2019 HaierMoney. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SecKeyToolForString : NSObject

+ (SecKeyRef)publicKey:(NSString *)key;

+ (SecKeyRef)privateKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
