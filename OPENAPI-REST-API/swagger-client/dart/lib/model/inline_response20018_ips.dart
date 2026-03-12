part of swagger.api;

class InlineResponse20018Ips {
  
  double serviceId = null;

  String serviceModule = null;

  String serviceHostname = null;

  InlineResponse20018Ips();

  @override
  String toString() {
    return 'InlineResponse20018Ips[serviceId=$serviceId, serviceModule=$serviceModule, serviceHostname=$serviceHostname, ]';
  }

  InlineResponse20018Ips.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    serviceId = json['service_id'];
    serviceModule = json['service_module'];
    serviceHostname = json['service_hostname'];
  }

  Map<String, dynamic> toJson() {
    return {
      'service_id': serviceId,
      'service_module': serviceModule,
      'service_hostname': serviceHostname
     };
  }

  static List<InlineResponse20018Ips> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20018Ips>() : json.map((value) => new InlineResponse20018Ips.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20018Ips> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20018Ips>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20018Ips.fromJson(value));
    }
    return map;
  }
}
