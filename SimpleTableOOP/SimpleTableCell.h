//
//  SimpleTableCell.h
//  SimpleTableOOP
//
//  Created by dev on 12/12/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
