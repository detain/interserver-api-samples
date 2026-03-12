@isTest
private class OASPostWebsiteMigrationRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest1 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest2 = postWebsiteMigrationRequest1;
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest3 = new OASPostWebsiteMigrationRequest();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest4 = postWebsiteMigrationRequest3;

        System.assert(postWebsiteMigrationRequest1.equals(postWebsiteMigrationRequest2));
        System.assert(postWebsiteMigrationRequest2.equals(postWebsiteMigrationRequest1));
        System.assert(postWebsiteMigrationRequest1.equals(postWebsiteMigrationRequest1));
        System.assert(postWebsiteMigrationRequest3.equals(postWebsiteMigrationRequest4));
        System.assert(postWebsiteMigrationRequest4.equals(postWebsiteMigrationRequest3));
        System.assert(postWebsiteMigrationRequest3.equals(postWebsiteMigrationRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest1 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest2 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest3 = new OASPostWebsiteMigrationRequest();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest4 = new OASPostWebsiteMigrationRequest();

        System.assert(postWebsiteMigrationRequest1.equals(postWebsiteMigrationRequest2));
        System.assert(postWebsiteMigrationRequest2.equals(postWebsiteMigrationRequest1));
        System.assert(postWebsiteMigrationRequest3.equals(postWebsiteMigrationRequest4));
        System.assert(postWebsiteMigrationRequest4.equals(postWebsiteMigrationRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest1 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest2 = new OASPostWebsiteMigrationRequest();

        System.assertEquals(false, postWebsiteMigrationRequest1.equals('foo'));
        System.assertEquals(false, postWebsiteMigrationRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest1 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest2 = new OASPostWebsiteMigrationRequest();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest3;

        System.assertEquals(false, postWebsiteMigrationRequest1.equals(postWebsiteMigrationRequest3));
        System.assertEquals(false, postWebsiteMigrationRequest2.equals(postWebsiteMigrationRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest1 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest2 = new OASPostWebsiteMigrationRequest();

        System.assertEquals(postWebsiteMigrationRequest1.hashCode(), postWebsiteMigrationRequest1.hashCode());
        System.assertEquals(postWebsiteMigrationRequest2.hashCode(), postWebsiteMigrationRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest1 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest2 = OASPostWebsiteMigrationRequest.getExample();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest3 = new OASPostWebsiteMigrationRequest();
        OASPostWebsiteMigrationRequest postWebsiteMigrationRequest4 = new OASPostWebsiteMigrationRequest();

        System.assert(postWebsiteMigrationRequest1.equals(postWebsiteMigrationRequest2));
        System.assert(postWebsiteMigrationRequest3.equals(postWebsiteMigrationRequest4));
        System.assertEquals(postWebsiteMigrationRequest1.hashCode(), postWebsiteMigrationRequest2.hashCode());
        System.assertEquals(postWebsiteMigrationRequest3.hashCode(), postWebsiteMigrationRequest4.hashCode());
    }
}
