#ifndef CUSTOMTYPES_H
#define CUSTOMTYPES_H

namespace ItemType {
    enum types {
        Project,
        Suite,
        TestCase
    };
}

namespace MessageIdSetMethod {
    enum types {
        Automatically,
        Manually
    };
}

namespace ResponseSelectionMethod {
    enum types {
        Request_Id_Equal_Response_Id,
        Request_Correl_Id_Equal_Response_Correl_Id,
        Request_Id_Equal_Response_Correl_Id,
        //Selection_String,
        None
    };
}

namespace TestCaseStatus {
    enum types {
        Passed,
        Failed,
        NoRun
    };
}


#endif // CUSTOMTYPES_H
