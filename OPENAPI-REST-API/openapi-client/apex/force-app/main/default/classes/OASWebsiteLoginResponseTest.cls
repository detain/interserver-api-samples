@isTest
private class OASWebsiteLoginResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteLoginResponse websiteLoginResponse1 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse2 = websiteLoginResponse1;
        OASWebsiteLoginResponse websiteLoginResponse3 = new OASWebsiteLoginResponse();
        OASWebsiteLoginResponse websiteLoginResponse4 = websiteLoginResponse3;

        System.assert(websiteLoginResponse1.equals(websiteLoginResponse2));
        System.assert(websiteLoginResponse2.equals(websiteLoginResponse1));
        System.assert(websiteLoginResponse1.equals(websiteLoginResponse1));
        System.assert(websiteLoginResponse3.equals(websiteLoginResponse4));
        System.assert(websiteLoginResponse4.equals(websiteLoginResponse3));
        System.assert(websiteLoginResponse3.equals(websiteLoginResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteLoginResponse websiteLoginResponse1 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse2 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse3 = new OASWebsiteLoginResponse();
        OASWebsiteLoginResponse websiteLoginResponse4 = new OASWebsiteLoginResponse();

        System.assert(websiteLoginResponse1.equals(websiteLoginResponse2));
        System.assert(websiteLoginResponse2.equals(websiteLoginResponse1));
        System.assert(websiteLoginResponse3.equals(websiteLoginResponse4));
        System.assert(websiteLoginResponse4.equals(websiteLoginResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteLoginResponse websiteLoginResponse1 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse2 = new OASWebsiteLoginResponse();

        System.assertEquals(false, websiteLoginResponse1.equals('foo'));
        System.assertEquals(false, websiteLoginResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteLoginResponse websiteLoginResponse1 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse2 = new OASWebsiteLoginResponse();
        OASWebsiteLoginResponse websiteLoginResponse3;

        System.assertEquals(false, websiteLoginResponse1.equals(websiteLoginResponse3));
        System.assertEquals(false, websiteLoginResponse2.equals(websiteLoginResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteLoginResponse websiteLoginResponse1 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse2 = new OASWebsiteLoginResponse();

        System.assertEquals(websiteLoginResponse1.hashCode(), websiteLoginResponse1.hashCode());
        System.assertEquals(websiteLoginResponse2.hashCode(), websiteLoginResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteLoginResponse websiteLoginResponse1 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse2 = OASWebsiteLoginResponse.getExample();
        OASWebsiteLoginResponse websiteLoginResponse3 = new OASWebsiteLoginResponse();
        OASWebsiteLoginResponse websiteLoginResponse4 = new OASWebsiteLoginResponse();

        System.assert(websiteLoginResponse1.equals(websiteLoginResponse2));
        System.assert(websiteLoginResponse3.equals(websiteLoginResponse4));
        System.assertEquals(websiteLoginResponse1.hashCode(), websiteLoginResponse2.hashCode());
        System.assertEquals(websiteLoginResponse3.hashCode(), websiteLoginResponse4.hashCode());
    }
}
