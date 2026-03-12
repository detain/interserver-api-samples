part of swagger.api;

class InlineResponse20012 {
  
  InlineResponse20012ServiceInfo serviceInfo = null;

  List<InlineResponse20012ClientLinks> clientLinks = [];

  InlineResponse20012BillingDetails billingDetails = null;

  String custCurrency = null;

  String custCurrencySymbol = null;

  String package = null;

  InlineResponse20012ExtraInfoTables extraInfoTables = null;

  InlineResponse20012FilterFirewall filterFirewall = null;

  InlineResponse20012();

  @override
  String toString() {
    return 'InlineResponse20012[serviceInfo=$serviceInfo, clientLinks=$clientLinks, billingDetails=$billingDetails, custCurrency=$custCurrency, custCurrencySymbol=$custCurrencySymbol, package=$package, extraInfoTables=$extraInfoTables, filterFirewall=$filterFirewall, ]';
  }

  InlineResponse20012.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    serviceInfo = new InlineResponse20012ServiceInfo.fromJson(json['serviceInfo']);
    clientLinks = InlineResponse20012ClientLinks.listFromJson(json['client_links']);
    billingDetails = new InlineResponse20012BillingDetails.fromJson(json['billingDetails']);
    custCurrency = json['custCurrency'];
    custCurrencySymbol = json['custCurrencySymbol'];
    package = json['package'];
    extraInfoTables = new InlineResponse20012ExtraInfoTables.fromJson(json['extraInfoTables']);
    filterFirewall = new InlineResponse20012FilterFirewall.fromJson(json['filter_firewall']);
  }

  Map<String, dynamic> toJson() {
    return {
      'serviceInfo': serviceInfo,
      'client_links': clientLinks,
      'billingDetails': billingDetails,
      'custCurrency': custCurrency,
      'custCurrencySymbol': custCurrencySymbol,
      'package': package,
      'extraInfoTables': extraInfoTables,
      'filter_firewall': filterFirewall
     };
  }

  static List<InlineResponse20012> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20012>() : json.map((value) => new InlineResponse20012.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20012>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20012.fromJson(value));
    }
    return map;
  }
}
