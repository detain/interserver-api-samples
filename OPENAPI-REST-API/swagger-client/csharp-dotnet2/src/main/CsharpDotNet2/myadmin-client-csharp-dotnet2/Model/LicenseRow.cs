using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Licenses&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class LicenseRow {
    /// <summary>
    /// The id of the license.
    /// </summary>
    /// <value>The id of the license.</value>
    [DataMember(Name="license_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_id")]
    public string LicenseId { get; set; }

    /// <summary>
    /// The hostname of the license.
    /// </summary>
    /// <value>The hostname of the license.</value>
    [DataMember(Name="license_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_hostname")]
    public string LicenseHostname { get; set; }

    /// <summary>
    /// The ip of the license.
    /// </summary>
    /// <value>The ip of the license.</value>
    [DataMember(Name="license_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_ip")]
    public string LicenseIp { get; set; }

    /// <summary>
    /// The services name of the license.
    /// </summary>
    /// <value>The services name of the license.</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }

    /// <summary>
    /// The cost of the license.
    /// </summary>
    /// <value>The cost of the license.</value>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public string Cost { get; set; }

    /// <summary>
    /// The status of the license.
    /// </summary>
    /// <value>The status of the license.</value>
    [DataMember(Name="license_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_status")]
    public string LicenseStatus { get; set; }

    /// <summary>
    /// The invoices paid of the license.
    /// </summary>
    /// <value>The invoices paid of the license.</value>
    [DataMember(Name="invoices_paid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_paid")]
    public string InvoicesPaid { get; set; }

    /// <summary>
    /// The invoices date of the license.
    /// </summary>
    /// <value>The invoices date of the license.</value>
    [DataMember(Name="invoices_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices_date")]
    public DateTime? InvoicesDate { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicenseRow {\n");
      sb.Append("  LicenseId: ").Append(LicenseId).Append("\n");
      sb.Append("  LicenseHostname: ").Append(LicenseHostname).Append("\n");
      sb.Append("  LicenseIp: ").Append(LicenseIp).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
      sb.Append("  LicenseStatus: ").Append(LicenseStatus).Append("\n");
      sb.Append("  InvoicesPaid: ").Append(InvoicesPaid).Append("\n");
      sb.Append("  InvoicesDate: ").Append(InvoicesDate).Append("\n");
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
