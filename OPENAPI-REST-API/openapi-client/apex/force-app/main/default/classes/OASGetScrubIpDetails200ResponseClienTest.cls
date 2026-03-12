@isTest
private class OASGetScrubIpDetails200ResponseClienTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner1 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner2 = getScrubIpDetails200ResponseClientLinksInner1;
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner3 = new OASGetScrubIpDetails200ResponseClien();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner4 = getScrubIpDetails200ResponseClientLinksInner3;

        System.assert(getScrubIpDetails200ResponseClientLinksInner1.equals(getScrubIpDetails200ResponseClientLinksInner2));
        System.assert(getScrubIpDetails200ResponseClientLinksInner2.equals(getScrubIpDetails200ResponseClientLinksInner1));
        System.assert(getScrubIpDetails200ResponseClientLinksInner1.equals(getScrubIpDetails200ResponseClientLinksInner1));
        System.assert(getScrubIpDetails200ResponseClientLinksInner3.equals(getScrubIpDetails200ResponseClientLinksInner4));
        System.assert(getScrubIpDetails200ResponseClientLinksInner4.equals(getScrubIpDetails200ResponseClientLinksInner3));
        System.assert(getScrubIpDetails200ResponseClientLinksInner3.equals(getScrubIpDetails200ResponseClientLinksInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner1 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner2 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner3 = new OASGetScrubIpDetails200ResponseClien();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner4 = new OASGetScrubIpDetails200ResponseClien();

        System.assert(getScrubIpDetails200ResponseClientLinksInner1.equals(getScrubIpDetails200ResponseClientLinksInner2));
        System.assert(getScrubIpDetails200ResponseClientLinksInner2.equals(getScrubIpDetails200ResponseClientLinksInner1));
        System.assert(getScrubIpDetails200ResponseClientLinksInner3.equals(getScrubIpDetails200ResponseClientLinksInner4));
        System.assert(getScrubIpDetails200ResponseClientLinksInner4.equals(getScrubIpDetails200ResponseClientLinksInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner1 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner2 = new OASGetScrubIpDetails200ResponseClien();

        System.assertEquals(false, getScrubIpDetails200ResponseClientLinksInner1.equals('foo'));
        System.assertEquals(false, getScrubIpDetails200ResponseClientLinksInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner1 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner2 = new OASGetScrubIpDetails200ResponseClien();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner3;

        System.assertEquals(false, getScrubIpDetails200ResponseClientLinksInner1.equals(getScrubIpDetails200ResponseClientLinksInner3));
        System.assertEquals(false, getScrubIpDetails200ResponseClientLinksInner2.equals(getScrubIpDetails200ResponseClientLinksInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner1 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner2 = new OASGetScrubIpDetails200ResponseClien();

        System.assertEquals(getScrubIpDetails200ResponseClientLinksInner1.hashCode(), getScrubIpDetails200ResponseClientLinksInner1.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseClientLinksInner2.hashCode(), getScrubIpDetails200ResponseClientLinksInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner1 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner2 = OASGetScrubIpDetails200ResponseClien.getExample();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner3 = new OASGetScrubIpDetails200ResponseClien();
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner4 = new OASGetScrubIpDetails200ResponseClien();

        System.assert(getScrubIpDetails200ResponseClientLinksInner1.equals(getScrubIpDetails200ResponseClientLinksInner2));
        System.assert(getScrubIpDetails200ResponseClientLinksInner3.equals(getScrubIpDetails200ResponseClientLinksInner4));
        System.assertEquals(getScrubIpDetails200ResponseClientLinksInner1.hashCode(), getScrubIpDetails200ResponseClientLinksInner2.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseClientLinksInner3.hashCode(), getScrubIpDetails200ResponseClientLinksInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetScrubIpDetails200ResponseClien getScrubIpDetails200ResponseClientLinksInner = new OASGetScrubIpDetails200ResponseClien();
        Map<String, String> x-property-mappings = getScrubIpDetails200ResponseClientLinksInner.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
        System.assertEquals('otherAttr', x-property-mappings.get('other_attr'));
    }
}
