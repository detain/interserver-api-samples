using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Example schema for a domain service catalog entry.
  /// </summary>
  [DataContract]
  public class DomainOrderServices10001 {
    /// <summary>
    /// Service ID
    /// </summary>
    /// <value>Service ID</value>
    [DataMember(Name="services_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_id")]
    public string ServicesId { get; set; }

    /// <summary>
    /// Service Name
    /// </summary>
    /// <value>Service Name</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }

    /// <summary>
    /// Service Cost
    /// </summary>
    /// <value>Service Cost</value>
    [DataMember(Name="services_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_cost")]
    public string ServicesCost { get; set; }

    /// <summary>
    /// Currency of Service Cost
    /// </summary>
    /// <value>Currency of Service Cost</value>
    [DataMember(Name="services_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_currency")]
    public string ServicesCurrency { get; set; }

    /// <summary>
    /// Service Category
    /// </summary>
    /// <value>Service Category</value>
    [DataMember(Name="services_category", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_category")]
    public string ServicesCategory { get; set; }

    /// <summary>
    /// Buyable flag for Service
    /// </summary>
    /// <value>Buyable flag for Service</value>
    [DataMember(Name="services_buyable", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_buyable")]
    public string ServicesBuyable { get; set; }

    /// <summary>
    /// Service Type
    /// </summary>
    /// <value>Service Type</value>
    [DataMember(Name="services_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_type")]
    public string ServicesType { get; set; }

    /// <summary>
    /// Field 1 of Service
    /// </summary>
    /// <value>Field 1 of Service</value>
    [DataMember(Name="services_field1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field1")]
    public string ServicesField1 { get; set; }

    /// <summary>
    /// Field 2 of Service
    /// </summary>
    /// <value>Field 2 of Service</value>
    [DataMember(Name="services_field2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field2")]
    public string ServicesField2 { get; set; }

    /// <summary>
    /// Module of Service
    /// </summary>
    /// <value>Module of Service</value>
    [DataMember(Name="services_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_module")]
    public string ServicesModule { get; set; }

    /// <summary>
    /// Hidden flag for Service
    /// </summary>
    /// <value>Hidden flag for Service</value>
    [DataMember(Name="services_hidden", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_hidden")]
    public string ServicesHidden { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainOrderServices10001 {\n");
      sb.Append("  ServicesId: ").Append(ServicesId).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
      sb.Append("  ServicesCost: ").Append(ServicesCost).Append("\n");
      sb.Append("  ServicesCurrency: ").Append(ServicesCurrency).Append("\n");
      sb.Append("  ServicesCategory: ").Append(ServicesCategory).Append("\n");
      sb.Append("  ServicesBuyable: ").Append(ServicesBuyable).Append("\n");
      sb.Append("  ServicesType: ").Append(ServicesType).Append("\n");
      sb.Append("  ServicesField1: ").Append(ServicesField1).Append("\n");
      sb.Append("  ServicesField2: ").Append(ServicesField2).Append("\n");
      sb.Append("  ServicesModule: ").Append(ServicesModule).Append("\n");
      sb.Append("  ServicesHidden: ").Append(ServicesHidden).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
