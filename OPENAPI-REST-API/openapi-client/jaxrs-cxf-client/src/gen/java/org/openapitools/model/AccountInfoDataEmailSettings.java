package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AccountInfoDataEmailSettings  {
  
  @ApiModelProperty(value = "")

  private String adminCcBadResponse;

  @ApiModelProperty(value = "")

  private String adminMassCommunicationsTpl;
 /**
   * Get adminCcBadResponse
   * @return adminCcBadResponse
  **/
  @JsonProperty("admin/cc_bad_response")
  public String getAdminCcBadResponse() {
    return adminCcBadResponse;
  }

  public void setAdminCcBadResponse(String adminCcBadResponse) {
    this.adminCcBadResponse = adminCcBadResponse;
  }

  public AccountInfoDataEmailSettings adminCcBadResponse(String adminCcBadResponse) {
    this.adminCcBadResponse = adminCcBadResponse;
    return this;
  }

 /**
   * Get adminMassCommunicationsTpl
   * @return adminMassCommunicationsTpl
  **/
  @JsonProperty("admin/mass_communications.tpl")
  public String getAdminMassCommunicationsTpl() {
    return adminMassCommunicationsTpl;
  }

  public void setAdminMassCommunicationsTpl(String adminMassCommunicationsTpl) {
    this.adminMassCommunicationsTpl = adminMassCommunicationsTpl;
  }

  public AccountInfoDataEmailSettings adminMassCommunicationsTpl(String adminMassCommunicationsTpl) {
    this.adminMassCommunicationsTpl = adminMassCommunicationsTpl;
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
    AccountInfoDataEmailSettings accountInfoDataEmailSettings = (AccountInfoDataEmailSettings) o;
    return Objects.equals(this.adminCcBadResponse, accountInfoDataEmailSettings.adminCcBadResponse) &&
        Objects.equals(this.adminMassCommunicationsTpl, accountInfoDataEmailSettings.adminMassCommunicationsTpl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adminCcBadResponse, adminMassCommunicationsTpl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoDataEmailSettings {\n");
    
    sb.append("    adminCcBadResponse: ").append(toIndentedString(adminCcBadResponse)).append("\n");
    sb.append("    adminMassCommunicationsTpl: ").append(toIndentedString(adminMassCommunicationsTpl)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

