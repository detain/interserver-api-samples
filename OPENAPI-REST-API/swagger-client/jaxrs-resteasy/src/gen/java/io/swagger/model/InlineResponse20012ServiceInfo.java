package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class InlineResponse20012ServiceInfo   {
  private String scrubIpId = null;  private String scrubIpType = null;  private String scrubIpCustid = null;  private String scrubIpOrderDate = null;  private String scrubIpIp = null;  private String scrubIpServiceId = null;  private String scrubIpServiceModule = null;  /**
   * Gets or Sets scrubIpStatus
   */
  public enum ScrubIpStatusEnum {
    ACTIVE("active"),
    PENDING("pending"),
    CANCELED("canceled"),
    EXPIRED("expired");
    private String value;

    ScrubIpStatusEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private ScrubIpStatusEnum scrubIpStatus = null;  private String scrubIpInvoice = null;  private String scrubIpCurrency = null;  private String scrubIpCoupon = null;  private String scrubIpComment = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_id")
  @NotNull
  public String getScrubIpId() {
    return scrubIpId;
  }
  public void setScrubIpId(String scrubIpId) {
    this.scrubIpId = scrubIpId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_type")
  @NotNull
  public String getScrubIpType() {
    return scrubIpType;
  }
  public void setScrubIpType(String scrubIpType) {
    this.scrubIpType = scrubIpType;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_custid")
  @NotNull
  public String getScrubIpCustid() {
    return scrubIpCustid;
  }
  public void setScrubIpCustid(String scrubIpCustid) {
    this.scrubIpCustid = scrubIpCustid;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_order_date")
  @NotNull
  public String getScrubIpOrderDate() {
    return scrubIpOrderDate;
  }
  public void setScrubIpOrderDate(String scrubIpOrderDate) {
    this.scrubIpOrderDate = scrubIpOrderDate;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_ip")
  @NotNull
  public String getScrubIpIp() {
    return scrubIpIp;
  }
  public void setScrubIpIp(String scrubIpIp) {
    this.scrubIpIp = scrubIpIp;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_service_id")
  @NotNull
  public String getScrubIpServiceId() {
    return scrubIpServiceId;
  }
  public void setScrubIpServiceId(String scrubIpServiceId) {
    this.scrubIpServiceId = scrubIpServiceId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_service_module")
  @NotNull
  public String getScrubIpServiceModule() {
    return scrubIpServiceModule;
  }
  public void setScrubIpServiceModule(String scrubIpServiceModule) {
    this.scrubIpServiceModule = scrubIpServiceModule;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_status")
  @NotNull
  public ScrubIpStatusEnum getScrubIpStatus() {
    return scrubIpStatus;
  }
  public void setScrubIpStatus(ScrubIpStatusEnum scrubIpStatus) {
    this.scrubIpStatus = scrubIpStatus;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_invoice")
  @NotNull
  public String getScrubIpInvoice() {
    return scrubIpInvoice;
  }
  public void setScrubIpInvoice(String scrubIpInvoice) {
    this.scrubIpInvoice = scrubIpInvoice;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_currency")
  @NotNull
  public String getScrubIpCurrency() {
    return scrubIpCurrency;
  }
  public void setScrubIpCurrency(String scrubIpCurrency) {
    this.scrubIpCurrency = scrubIpCurrency;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_coupon")
  @NotNull
  public String getScrubIpCoupon() {
    return scrubIpCoupon;
  }
  public void setScrubIpCoupon(String scrubIpCoupon) {
    this.scrubIpCoupon = scrubIpCoupon;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("scrub_ip_comment")
  @NotNull
  public String getScrubIpComment() {
    return scrubIpComment;
  }
  public void setScrubIpComment(String scrubIpComment) {
    this.scrubIpComment = scrubIpComment;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012ServiceInfo inlineResponse20012ServiceInfo = (InlineResponse20012ServiceInfo) o;
    return Objects.equals(scrubIpId, inlineResponse20012ServiceInfo.scrubIpId) &&
        Objects.equals(scrubIpType, inlineResponse20012ServiceInfo.scrubIpType) &&
        Objects.equals(scrubIpCustid, inlineResponse20012ServiceInfo.scrubIpCustid) &&
        Objects.equals(scrubIpOrderDate, inlineResponse20012ServiceInfo.scrubIpOrderDate) &&
        Objects.equals(scrubIpIp, inlineResponse20012ServiceInfo.scrubIpIp) &&
        Objects.equals(scrubIpServiceId, inlineResponse20012ServiceInfo.scrubIpServiceId) &&
        Objects.equals(scrubIpServiceModule, inlineResponse20012ServiceInfo.scrubIpServiceModule) &&
        Objects.equals(scrubIpStatus, inlineResponse20012ServiceInfo.scrubIpStatus) &&
        Objects.equals(scrubIpInvoice, inlineResponse20012ServiceInfo.scrubIpInvoice) &&
        Objects.equals(scrubIpCurrency, inlineResponse20012ServiceInfo.scrubIpCurrency) &&
        Objects.equals(scrubIpCoupon, inlineResponse20012ServiceInfo.scrubIpCoupon) &&
        Objects.equals(scrubIpComment, inlineResponse20012ServiceInfo.scrubIpComment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(scrubIpId, scrubIpType, scrubIpCustid, scrubIpOrderDate, scrubIpIp, scrubIpServiceId, scrubIpServiceModule, scrubIpStatus, scrubIpInvoice, scrubIpCurrency, scrubIpCoupon, scrubIpComment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012ServiceInfo {\n");
    
    sb.append("    scrubIpId: ").append(toIndentedString(scrubIpId)).append("\n");
    sb.append("    scrubIpType: ").append(toIndentedString(scrubIpType)).append("\n");
    sb.append("    scrubIpCustid: ").append(toIndentedString(scrubIpCustid)).append("\n");
    sb.append("    scrubIpOrderDate: ").append(toIndentedString(scrubIpOrderDate)).append("\n");
    sb.append("    scrubIpIp: ").append(toIndentedString(scrubIpIp)).append("\n");
    sb.append("    scrubIpServiceId: ").append(toIndentedString(scrubIpServiceId)).append("\n");
    sb.append("    scrubIpServiceModule: ").append(toIndentedString(scrubIpServiceModule)).append("\n");
    sb.append("    scrubIpStatus: ").append(toIndentedString(scrubIpStatus)).append("\n");
    sb.append("    scrubIpInvoice: ").append(toIndentedString(scrubIpInvoice)).append("\n");
    sb.append("    scrubIpCurrency: ").append(toIndentedString(scrubIpCurrency)).append("\n");
    sb.append("    scrubIpCoupon: ").append(toIndentedString(scrubIpCoupon)).append("\n");
    sb.append("    scrubIpComment: ").append(toIndentedString(scrubIpComment)).append("\n");
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
