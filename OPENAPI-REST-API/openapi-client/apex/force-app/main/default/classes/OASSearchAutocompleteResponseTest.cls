@isTest
private class OASSearchAutocompleteResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASSearchAutocompleteResponse searchAutocompleteResponse1 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse2 = searchAutocompleteResponse1;
        OASSearchAutocompleteResponse searchAutocompleteResponse3 = new OASSearchAutocompleteResponse();
        OASSearchAutocompleteResponse searchAutocompleteResponse4 = searchAutocompleteResponse3;

        System.assert(searchAutocompleteResponse1.equals(searchAutocompleteResponse2));
        System.assert(searchAutocompleteResponse2.equals(searchAutocompleteResponse1));
        System.assert(searchAutocompleteResponse1.equals(searchAutocompleteResponse1));
        System.assert(searchAutocompleteResponse3.equals(searchAutocompleteResponse4));
        System.assert(searchAutocompleteResponse4.equals(searchAutocompleteResponse3));
        System.assert(searchAutocompleteResponse3.equals(searchAutocompleteResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASSearchAutocompleteResponse searchAutocompleteResponse1 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse2 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse3 = new OASSearchAutocompleteResponse();
        OASSearchAutocompleteResponse searchAutocompleteResponse4 = new OASSearchAutocompleteResponse();

        System.assert(searchAutocompleteResponse1.equals(searchAutocompleteResponse2));
        System.assert(searchAutocompleteResponse2.equals(searchAutocompleteResponse1));
        System.assert(searchAutocompleteResponse3.equals(searchAutocompleteResponse4));
        System.assert(searchAutocompleteResponse4.equals(searchAutocompleteResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASSearchAutocompleteResponse searchAutocompleteResponse1 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse2 = new OASSearchAutocompleteResponse();

        System.assertEquals(false, searchAutocompleteResponse1.equals('foo'));
        System.assertEquals(false, searchAutocompleteResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASSearchAutocompleteResponse searchAutocompleteResponse1 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse2 = new OASSearchAutocompleteResponse();
        OASSearchAutocompleteResponse searchAutocompleteResponse3;

        System.assertEquals(false, searchAutocompleteResponse1.equals(searchAutocompleteResponse3));
        System.assertEquals(false, searchAutocompleteResponse2.equals(searchAutocompleteResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASSearchAutocompleteResponse searchAutocompleteResponse1 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse2 = new OASSearchAutocompleteResponse();

        System.assertEquals(searchAutocompleteResponse1.hashCode(), searchAutocompleteResponse1.hashCode());
        System.assertEquals(searchAutocompleteResponse2.hashCode(), searchAutocompleteResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASSearchAutocompleteResponse searchAutocompleteResponse1 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse2 = OASSearchAutocompleteResponse.getExample();
        OASSearchAutocompleteResponse searchAutocompleteResponse3 = new OASSearchAutocompleteResponse();
        OASSearchAutocompleteResponse searchAutocompleteResponse4 = new OASSearchAutocompleteResponse();

        System.assert(searchAutocompleteResponse1.equals(searchAutocompleteResponse2));
        System.assert(searchAutocompleteResponse3.equals(searchAutocompleteResponse4));
        System.assertEquals(searchAutocompleteResponse1.hashCode(), searchAutocompleteResponse2.hashCode());
        System.assertEquals(searchAutocompleteResponse3.hashCode(), searchAutocompleteResponse4.hashCode());
    }
}
