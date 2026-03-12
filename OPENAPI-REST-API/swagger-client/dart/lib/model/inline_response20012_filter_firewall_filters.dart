part of swagger.api;

class InlineResponse20012FilterFirewallFilters {
  
  String daddr = null;

  String dest = null;

  String filterName = null;

  String destinationIp = null;

  String filter = null;

  InlineResponse20012FilterFirewallFilters();

  @override
  String toString() {
    return 'InlineResponse20012FilterFirewallFilters[daddr=$daddr, dest=$dest, filterName=$filterName, destinationIp=$destinationIp, filter=$filter, ]';
  }

  InlineResponse20012FilterFirewallFilters.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    daddr = json['daddr'];
    dest = json['dest'];
    filterName = json['filter_name'];
    destinationIp = json['destination_ip'];
    filter = json['filter'];
  }

  Map<String, dynamic> toJson() {
    return {
      'daddr': daddr,
      'dest': dest,
      'filter_name': filterName,
      'destination_ip': destinationIp,
      'filter': filter
     };
  }

  static List<InlineResponse20012FilterFirewallFilters> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20012FilterFirewallFilters>() : json.map((value) => new InlineResponse20012FilterFirewallFilters.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012FilterFirewallFilters> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20012FilterFirewallFilters>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20012FilterFirewallFilters.fromJson(value));
    }
    return map;
  }
}
