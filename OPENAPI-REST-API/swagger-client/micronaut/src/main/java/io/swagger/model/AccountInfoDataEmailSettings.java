package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * AccountInfoDataEmailSettings
 */
@Validated
@Introspected

public class AccountInfoDataEmailSettings   {
  @JsonProperty("admin/cc_bad_response")
  private String adminccBadResponse = null;

  @JsonProperty("admin/mass_communications.tpl")
  private String adminmassCommunicationsTpl = null;

  public AccountInfoDataEmailSettings adminccBadResponse(String adminccBadResponse) {
    this.adminccBadResponse = adminccBadResponse;
    return this;
  }

  /**
   * Get adminccBadResponse
   * @return adminccBadResponse
  **/
  @Schema(description = "")
  @NotNull

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
  @Schema(description = "")
  @NotNull

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
