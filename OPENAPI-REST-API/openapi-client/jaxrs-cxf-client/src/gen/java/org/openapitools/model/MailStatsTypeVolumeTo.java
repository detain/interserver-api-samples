package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailStatsTypeVolumeTo  {
  
  @ApiModelProperty(value = "")

  private Integer clientAtDomainCom;

  @ApiModelProperty(value = "")

  private Integer userAtSiteNet;

  @ApiModelProperty(value = "")

  private Integer salesAtCompanyCom;

  @ApiModelProperty(value = "")

  private Integer clientAtAnothersiteCom;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailStatsTypeVolumeTo mailStatsTypeVolumeTo = (MailStatsTypeVolumeTo) o;
    return Objects.equals(this.clientAtDomainCom, mailStatsTypeVolumeTo.clientAtDomainCom) &&
        Objects.equals(this.userAtSiteNet, mailStatsTypeVolumeTo.userAtSiteNet) &&
        Objects.equals(this.salesAtCompanyCom, mailStatsTypeVolumeTo.salesAtCompanyCom) &&
        Objects.equals(this.clientAtAnothersiteCom, mailStatsTypeVolumeTo.clientAtAnothersiteCom);
  }

  @Override
  public int hashCode() {
    return Objects.hash(clientAtDomainCom, userAtSiteNet, salesAtCompanyCom, clientAtAnothersiteCom);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

