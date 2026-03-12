using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Request payload for enabling or disabling Whois privacy.
  /// </summary>
  [DataContract]
  public class DomainWhoisPrivacyRequest {
    /// <summary>
    /// Action to perform (enable or disableCancel).
    /// </summary>
    /// <value>Action to perform (enable or disableCancel).</value>
    [DataMember(Name="func", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "func")]
    public string Func { get; set; }

    /// <summary>
    /// CSRF token if the API requires it for the account.
    /// </summary>
    /// <value>CSRF token if the API requires it for the account.</value>
    [DataMember(Name="csrf_token", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "csrf_token")]
    public string CsrfToken { get; set; }

    /// <summary>
    /// Gets or Sets DomainFirstname
    /// </summary>
    [DataMember(Name="domain_firstname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_firstname")]
    public string DomainFirstname { get; set; }

    /// <summary>
    /// Gets or Sets DomainLastname
    /// </summary>
    [DataMember(Name="domain_lastname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_lastname")]
    public string DomainLastname { get; set; }

    /// <summary>
    /// Gets or Sets DomainEmail
    /// </summary>
    [DataMember(Name="domain_email", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_email")]
    public string DomainEmail { get; set; }

    /// <summary>
    /// Gets or Sets DomainAddress
    /// </summary>
    [DataMember(Name="domain_address", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_address")]
    public string DomainAddress { get; set; }

    /// <summary>
    /// Gets or Sets DomainAddress2
    /// </summary>
    [DataMember(Name="domain_address2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_address2")]
    public string DomainAddress2 { get; set; }

    /// <summary>
    /// Gets or Sets DomainAddress3
    /// </summary>
    [DataMember(Name="domain_address3", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_address3")]
    public string DomainAddress3 { get; set; }

    /// <summary>
    /// Gets or Sets DomainCity
    /// </summary>
    [DataMember(Name="domain_city", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_city")]
    public string DomainCity { get; set; }

    /// <summary>
    /// Gets or Sets DomainState
    /// </summary>
    [DataMember(Name="domain_state", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_state")]
    public string DomainState { get; set; }

    /// <summary>
    /// Gets or Sets DomainZip
    /// </summary>
    [DataMember(Name="domain_zip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_zip")]
    public string DomainZip { get; set; }

    /// <summary>
    /// Gets or Sets DomainCountry
    /// </summary>
    [DataMember(Name="domain_country", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_country")]
    public string DomainCountry { get; set; }

    /// <summary>
    /// Gets or Sets DomainPhone
    /// </summary>
    [DataMember(Name="domain_phone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_phone")]
    public string DomainPhone { get; set; }

    /// <summary>
    /// Gets or Sets DomainFax
    /// </summary>
    [DataMember(Name="domain_fax", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_fax")]
    public string DomainFax { get; set; }

    /// <summary>
    /// Gets or Sets DomainCompany
    /// </summary>
    [DataMember(Name="domain_company", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_company")]
    public string DomainCompany { get; set; }

    /// <summary>
    /// Gets or Sets DomainExtra
    /// </summary>
    [DataMember(Name="domain_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_extra")]
    public string DomainExtra { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainWhoisPrivacyRequest {\n");
      sb.Append("  Func: ").Append(Func).Append("\n");
      sb.Append("  CsrfToken: ").Append(CsrfToken).Append("\n");
      sb.Append("  DomainFirstname: ").Append(DomainFirstname).Append("\n");
      sb.Append("  DomainLastname: ").Append(DomainLastname).Append("\n");
      sb.Append("  DomainEmail: ").Append(DomainEmail).Append("\n");
      sb.Append("  DomainAddress: ").Append(DomainAddress).Append("\n");
      sb.Append("  DomainAddress2: ").Append(DomainAddress2).Append("\n");
      sb.Append("  DomainAddress3: ").Append(DomainAddress3).Append("\n");
      sb.Append("  DomainCity: ").Append(DomainCity).Append("\n");
      sb.Append("  DomainState: ").Append(DomainState).Append("\n");
      sb.Append("  DomainZip: ").Append(DomainZip).Append("\n");
      sb.Append("  DomainCountry: ").Append(DomainCountry).Append("\n");
      sb.Append("  DomainPhone: ").Append(DomainPhone).Append("\n");
      sb.Append("  DomainFax: ").Append(DomainFax).Append("\n");
      sb.Append("  DomainCompany: ").Append(DomainCompany).Append("\n");
      sb.Append("  DomainExtra: ").Append(DomainExtra).Append("\n");
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
