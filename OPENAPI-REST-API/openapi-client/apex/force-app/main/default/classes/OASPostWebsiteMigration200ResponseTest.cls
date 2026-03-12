@isTest
private class OASPostWebsiteMigration200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASPostWebsiteMigration200Response postWebsiteMigration200Response1 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response2 = postWebsiteMigration200Response1;
        OASPostWebsiteMigration200Response postWebsiteMigration200Response3 = new OASPostWebsiteMigration200Response();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response4 = postWebsiteMigration200Response3;

        System.assert(postWebsiteMigration200Response1.equals(postWebsiteMigration200Response2));
        System.assert(postWebsiteMigration200Response2.equals(postWebsiteMigration200Response1));
        System.assert(postWebsiteMigration200Response1.equals(postWebsiteMigration200Response1));
        System.assert(postWebsiteMigration200Response3.equals(postWebsiteMigration200Response4));
        System.assert(postWebsiteMigration200Response4.equals(postWebsiteMigration200Response3));
        System.assert(postWebsiteMigration200Response3.equals(postWebsiteMigration200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPostWebsiteMigration200Response postWebsiteMigration200Response1 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response2 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response3 = new OASPostWebsiteMigration200Response();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response4 = new OASPostWebsiteMigration200Response();

        System.assert(postWebsiteMigration200Response1.equals(postWebsiteMigration200Response2));
        System.assert(postWebsiteMigration200Response2.equals(postWebsiteMigration200Response1));
        System.assert(postWebsiteMigration200Response3.equals(postWebsiteMigration200Response4));
        System.assert(postWebsiteMigration200Response4.equals(postWebsiteMigration200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPostWebsiteMigration200Response postWebsiteMigration200Response1 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response2 = new OASPostWebsiteMigration200Response();

        System.assertEquals(false, postWebsiteMigration200Response1.equals('foo'));
        System.assertEquals(false, postWebsiteMigration200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPostWebsiteMigration200Response postWebsiteMigration200Response1 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response2 = new OASPostWebsiteMigration200Response();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response3;

        System.assertEquals(false, postWebsiteMigration200Response1.equals(postWebsiteMigration200Response3));
        System.assertEquals(false, postWebsiteMigration200Response2.equals(postWebsiteMigration200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPostWebsiteMigration200Response postWebsiteMigration200Response1 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response2 = new OASPostWebsiteMigration200Response();

        System.assertEquals(postWebsiteMigration200Response1.hashCode(), postWebsiteMigration200Response1.hashCode());
        System.assertEquals(postWebsiteMigration200Response2.hashCode(), postWebsiteMigration200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPostWebsiteMigration200Response postWebsiteMigration200Response1 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response2 = OASPostWebsiteMigration200Response.getExample();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response3 = new OASPostWebsiteMigration200Response();
        OASPostWebsiteMigration200Response postWebsiteMigration200Response4 = new OASPostWebsiteMigration200Response();

        System.assert(postWebsiteMigration200Response1.equals(postWebsiteMigration200Response2));
        System.assert(postWebsiteMigration200Response3.equals(postWebsiteMigration200Response4));
        System.assertEquals(postWebsiteMigration200Response1.hashCode(), postWebsiteMigration200Response2.hashCode());
        System.assertEquals(postWebsiteMigration200Response3.hashCode(), postWebsiteMigration200Response4.hashCode());
    }
}
