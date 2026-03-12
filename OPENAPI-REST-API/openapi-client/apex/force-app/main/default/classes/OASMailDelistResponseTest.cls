@isTest
private class OASMailDelistResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailDelistResponse mailDelistResponse1 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse2 = mailDelistResponse1;
        OASMailDelistResponse mailDelistResponse3 = new OASMailDelistResponse();
        OASMailDelistResponse mailDelistResponse4 = mailDelistResponse3;

        System.assert(mailDelistResponse1.equals(mailDelistResponse2));
        System.assert(mailDelistResponse2.equals(mailDelistResponse1));
        System.assert(mailDelistResponse1.equals(mailDelistResponse1));
        System.assert(mailDelistResponse3.equals(mailDelistResponse4));
        System.assert(mailDelistResponse4.equals(mailDelistResponse3));
        System.assert(mailDelistResponse3.equals(mailDelistResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailDelistResponse mailDelistResponse1 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse2 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse3 = new OASMailDelistResponse();
        OASMailDelistResponse mailDelistResponse4 = new OASMailDelistResponse();

        System.assert(mailDelistResponse1.equals(mailDelistResponse2));
        System.assert(mailDelistResponse2.equals(mailDelistResponse1));
        System.assert(mailDelistResponse3.equals(mailDelistResponse4));
        System.assert(mailDelistResponse4.equals(mailDelistResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailDelistResponse mailDelistResponse1 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse2 = new OASMailDelistResponse();

        System.assertEquals(false, mailDelistResponse1.equals('foo'));
        System.assertEquals(false, mailDelistResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailDelistResponse mailDelistResponse1 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse2 = new OASMailDelistResponse();
        OASMailDelistResponse mailDelistResponse3;

        System.assertEquals(false, mailDelistResponse1.equals(mailDelistResponse3));
        System.assertEquals(false, mailDelistResponse2.equals(mailDelistResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailDelistResponse mailDelistResponse1 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse2 = new OASMailDelistResponse();

        System.assertEquals(mailDelistResponse1.hashCode(), mailDelistResponse1.hashCode());
        System.assertEquals(mailDelistResponse2.hashCode(), mailDelistResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailDelistResponse mailDelistResponse1 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse2 = OASMailDelistResponse.getExample();
        OASMailDelistResponse mailDelistResponse3 = new OASMailDelistResponse();
        OASMailDelistResponse mailDelistResponse4 = new OASMailDelistResponse();

        System.assert(mailDelistResponse1.equals(mailDelistResponse2));
        System.assert(mailDelistResponse3.equals(mailDelistResponse4));
        System.assertEquals(mailDelistResponse1.hashCode(), mailDelistResponse2.hashCode());
        System.assertEquals(mailDelistResponse3.hashCode(), mailDelistResponse4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMailDelistResponse mailDelistResponse = new OASMailDelistResponse();
        System.assertEquals(new List<Object>(), mailDelistResponse.local);
        System.assertEquals(new List<Object>(), mailDelistResponse.mbtrap);
        System.assertEquals(new List<Object>(), mailDelistResponse.subject);
        System.assertEquals(new List<Object>(), mailDelistResponse.manual);
        System.assertEquals(null, mailDelistResponse.id);
    }
}
