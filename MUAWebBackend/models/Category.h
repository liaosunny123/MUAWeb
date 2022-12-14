//
// Created by epicmo on 22-10-14.
//

#ifndef MUAWEBBACKEND_CATEGORY_H
#define MUAWEBBACKEND_CATEGORY_H
namespace MUAWeb::Model{
    enum Category{
        schooldescription = 1,
        projectdescription = 2,
        rebuilddescription = 3,
        activitydescription = 4,
        othersdescription = 5,
    };
    std::string CategoryToString(Category);
    MUAWeb::Model::Category StringToCategory(const std::string&);
}
#endif //MUAWEBBACKEND_CATEGORY_H
