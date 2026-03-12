@isTest
private class OASMailClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailClientLink mailClientLink1 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink2 = mailClientLink1;
        OASMailClientLink mailClientLink3 = new OASMailClientLink();
        OASMailClientLink mailClientLink4 = mailClientLink3;

        System.assert(mailClientLink1.equals(mailClientLink2));
        System.assert(mailClientLink2.equals(mailClientLink1));
        System.assert(mailClientLink1.equals(mailClientLink1));
        System.assert(mailClientLink3.equals(mailClientLink4));
        System.assert(mailClientLink4.equals(mailClientLink3));
        System.assert(mailClientLink3.equals(mailClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailClientLink mailClientLink1 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink2 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink3 = new OASMailClientLink();
        OASMailClientLink mailClientLink4 = new OASMailClientLink();

        System.assert(mailClientLink1.equals(mailClientLink2));
        System.assert(mailClientLink2.equals(mailClientLink1));
        System.assert(mailClientLink3.equals(mailClientLink4));
        System.assert(mailClientLink4.equals(mailClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailClientLink mailClientLink1 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink2 = new OASMailClientLink();

        System.assertEquals(false, mailClientLink1.equals('foo'));
        System.assertEquals(false, mailClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailClientLink mailClientLink1 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink2 = new OASMailClientLink();
        OASMailClientLink mailClientLink3;

        System.assertEquals(false, mailClientLink1.equals(mailClientLink3));
        System.assertEquals(false, mailClientLink2.equals(mailClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailClientLink mailClientLink1 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink2 = new OASMailClientLink();

        System.assertEquals(mailClientLink1.hashCode(), mailClientLink1.hashCode());
        System.assertEquals(mailClientLink2.hashCode(), mailClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailClientLink mailClientLink1 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink2 = OASMailClientLink.getExample();
        OASMailClientLink mailClientLink3 = new OASMailClientLink();
        OASMailClientLink mailClientLink4 = new OASMailClientLink();

        System.assert(mailClientLink1.equals(mailClientLink2));
        System.assert(mailClientLink3.equals(mailClientLink4));
        System.assertEquals(mailClientLink1.hashCode(), mailClientLink2.hashCode());
        System.assertEquals(mailClientLink3.hashCode(), mailClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailClientLink mailClientLink = new OASMailClientLink();
        Map<String, String> x-property-mappings = mailClientLink.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
        System.assertEquals('otherAttr', x-property-mappings.get('other_attr'));
    }
}
