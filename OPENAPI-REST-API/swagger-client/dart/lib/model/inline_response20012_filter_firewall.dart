part of swagger.api;

class InlineResponse20012FilterFirewall {
  
  List<InlineResponse20012FilterFirewallRules> rules = [];

  List<InlineResponse20012FilterFirewallFilters> filters = [];

  int scrubEnabled = null;

  InlineResponse20012FilterFirewall();

  @override
  String toString() {
    return 'InlineResponse20012FilterFirewall[rules=$rules, filters=$filters, scrubEnabled=$scrubEnabled, ]';
  }

  InlineResponse20012FilterFirewall.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    rules = InlineResponse20012FilterFirewallRules.listFromJson(json['rules']);
    filters = InlineResponse20012FilterFirewallFilters.listFromJson(json['filters']);
    scrubEnabled = json['scrub_enabled'];
  }

  Map<String, dynamic> toJson() {
    return {
      'rules': rules,
      'filters': filters,
      'scrub_enabled': scrubEnabled
     };
  }

  static List<InlineResponse20012FilterFirewall> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20012FilterFirewall>() : json.map((value) => new InlineResponse20012FilterFirewall.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012FilterFirewall> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20012FilterFirewall>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20012FilterFirewall.fromJson(value));
    }
    return map;
  }
}
