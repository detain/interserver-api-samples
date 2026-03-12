package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * AccountInfoDataEmailSettings
 */




public class AccountInfoDataEmailSettings   {
  private String adminccBadResponse = null;

  private String adminmassCommunicationsTpl = null;

  public AccountInfoDataEmailSettings adminccBadResponse(String adminccBadResponse) {
    this.adminccBadResponse = adminccBadResponse;
    return this;
  }

  /**
   * Get adminccBadResponse
   * @return adminccBadResponse
   **/
    public String getAdminccBadResponse() {
    return adminccBadResponse;
  }

  public void setAdminccBadResponse(String adminccBadResponse) {
    this.adminccBadResponse = adminccBadResponse;
  }

  public AccountInfoDataEmailSettings adminmassCommunicationsTpl(String adminmassCommunicationsTpl) {
    this.adminmassCommunicationsTpl = adminmassCommunicationsTpl;
    return this;
  }

  /**
   * Get adminmassCommunicationsTpl
   * @return adminmassCommunicationsTpl
   **/
    public String getAdminmassCommunicationsTpl() {
    return adminmassCommunicationsTpl;
  }

  public void setAdminmassCommunicationsTpl(String adminmassCommunicationsTpl) {
    this.adminmassCommunicationsTpl = adminmassCommunicationsTpl;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoDataEmailSettings accountInfoDataEmailSettings = (AccountInfoDataEmailSettings) o;
    return Objects.equals(this.adminccBadResponse, accountInfoDataEmailSettings.adminccBadResponse) &&
        Objects.equals(this.adminmassCommunicationsTpl, accountInfoDataEmailSettings.adminmassCommunicationsTpl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adminccBadResponse, adminmassCommunicationsTpl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoDataEmailSettings {\n");
    
    sb.append("    adminccBadResponse: ").append(toIndentedString(adminccBadResponse)).append("\n");
    sb.append("    adminmassCommunicationsTpl: ").append(toIndentedString(adminmassCommunicationsTpl)).append("\n");
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
