package io.swagger.model;


import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class MailStatsTypeVolumeTo   {
  
  @Schema(description = "")
  private Integer clientAtDomainCom = null;
  
  @Schema(description = "")
  private Integer userAtSiteNet = null;
  
  @Schema(description = "")
  private Integer salesAtCompanyCom = null;
  
  @Schema(description = "")
  private Integer clientAtAnothersiteCom = null;
 /**
   * Get clientAtDomainCom
   * @return clientAtDomainCom
  **/
  @JsonProperty("client@domain.com")
  public Integer getClientAtDomainCom() {
    return clientAtDomainCom;
  }

  public void setClientAtDomainCom(Integer clientAtDomainCom) {
    this.clientAtDomainCom = clientAtDomainCom;
  }

  public MailStatsTypeVolumeTo clientAtDomainCom(Integer clientAtDomainCom) {
    this.clientAtDomainCom = clientAtDomainCom;
    return this;
  }

 /**
   * Get userAtSiteNet
   * @return userAtSiteNet
  **/
  @JsonProperty("user@site.net")
  public Integer getUserAtSiteNet() {
    return userAtSiteNet;
  }

  public void setUserAtSiteNet(Integer userAtSiteNet) {
    this.userAtSiteNet = userAtSiteNet;
  }

  public MailStatsTypeVolumeTo userAtSiteNet(Integer userAtSiteNet) {
    this.userAtSiteNet = userAtSiteNet;
    return this;
  }

 /**
   * Get salesAtCompanyCom
   * @return salesAtCompanyCom
  **/
  @JsonProperty("sales@company.com")
  public Integer getSalesAtCompanyCom() {
    return salesAtCompanyCom;
  }

  public void setSalesAtCompanyCom(Integer salesAtCompanyCom) {
    this.salesAtCompanyCom = salesAtCompanyCom;
  }

  public MailStatsTypeVolumeTo salesAtCompanyCom(Integer salesAtCompanyCom) {
    this.salesAtCompanyCom = salesAtCompanyCom;
    return this;
  }

 /**
   * Get clientAtAnothersiteCom
   * @return clientAtAnothersiteCom
  **/
  @JsonProperty("client@anothersite.com")
  public Integer getClientAtAnothersiteCom() {
    return clientAtAnothersiteCom;
  }

  public void setClientAtAnothersiteCom(Integer clientAtAnothersiteCom) {
    this.clientAtAnothersiteCom = clientAtAnothersiteCom;
  }

  public MailStatsTypeVolumeTo clientAtAnothersiteCom(Integer clientAtAnothersiteCom) {
    this.clientAtAnothersiteCom = clientAtAnothersiteCom;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailStatsTypeVolumeTo {\n");
    
    sb.append("    clientAtDomainCom: ").append(toIndentedString(clientAtDomainCom)).append("\n");
    sb.append("    userAtSiteNet: ").append(toIndentedString(userAtSiteNet)).append("\n");
    sb.append("    salesAtCompanyCom: ").append(toIndentedString(salesAtCompanyCom)).append("\n");
    sb.append("    clientAtAnothersiteCom: ").append(toIndentedString(clientAtAnothersiteCom)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
