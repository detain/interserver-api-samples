package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class MailStatsTypeVolumeTo   {
  private Integer clientAtDomainCom = null;
  private Integer userAtSiteNet = null;
  private Integer salesAtCompanyCom = null;
  private Integer clientAtAnothersiteCom = null;

  /**
   **/
  public MailStatsTypeVolumeTo clientAtDomainCom(Integer clientAtDomainCom) {
    this.clientAtDomainCom = clientAtDomainCom;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("client@domain.com")
  @NotNull
  public Integer getClientAtDomainCom() {
    return clientAtDomainCom;
  }
  public void setClientAtDomainCom(Integer clientAtDomainCom) {
    this.clientAtDomainCom = clientAtDomainCom;
  }

  /**
   **/
  public MailStatsTypeVolumeTo userAtSiteNet(Integer userAtSiteNet) {
    this.userAtSiteNet = userAtSiteNet;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("user@site.net")
  @NotNull
  public Integer getUserAtSiteNet() {
    return userAtSiteNet;
  }
  public void setUserAtSiteNet(Integer userAtSiteNet) {
    this.userAtSiteNet = userAtSiteNet;
  }

  /**
   **/
  public MailStatsTypeVolumeTo salesAtCompanyCom(Integer salesAtCompanyCom) {
    this.salesAtCompanyCom = salesAtCompanyCom;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("sales@company.com")
  @NotNull
  public Integer getSalesAtCompanyCom() {
    return salesAtCompanyCom;
  }
  public void setSalesAtCompanyCom(Integer salesAtCompanyCom) {
    this.salesAtCompanyCom = salesAtCompanyCom;
  }

  /**
   **/
  public MailStatsTypeVolumeTo clientAtAnothersiteCom(Integer clientAtAnothersiteCom) {
    this.clientAtAnothersiteCom = clientAtAnothersiteCom;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("client@anothersite.com")
  @NotNull
  public Integer getClientAtAnothersiteCom() {
    return clientAtAnothersiteCom;
  }
  public void setClientAtAnothersiteCom(Integer clientAtAnothersiteCom) {
    this.clientAtAnothersiteCom = clientAtAnothersiteCom;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailStatsTypeVolumeTo mailStatsTypeVolumeTo = (MailStatsTypeVolumeTo) o;
    return Objects.equals(clientAtDomainCom, mailStatsTypeVolumeTo.clientAtDomainCom) &&
        Objects.equals(userAtSiteNet, mailStatsTypeVolumeTo.userAtSiteNet) &&
        Objects.equals(salesAtCompanyCom, mailStatsTypeVolumeTo.salesAtCompanyCom) &&
        Objects.equals(clientAtAnothersiteCom, mailStatsTypeVolumeTo.clientAtAnothersiteCom);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
