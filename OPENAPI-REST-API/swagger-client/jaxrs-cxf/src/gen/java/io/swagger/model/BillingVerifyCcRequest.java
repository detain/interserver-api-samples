package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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

/**
  * Payload for verifying a credit card through the verification flow.
 **/
@Schema(description="Payload for verifying a credit card through the verification flow.")
public class BillingVerifyCcRequest   {
  
  @Schema(description = "Card index to verify.")
 /**
   * Card index to verify.  
  **/
  private Integer idx = null;
  
  @Schema(description = "CVV code for verification.")
 /**
   * CVV code for verification.  
  **/
  private String ccCcv2 = null;
  
  @Schema(description = "First micro-charge amount for verification.")
 /**
   * First micro-charge amount for verification.  
  **/
  private String ccAmount1 = null;
  
  @Schema(description = "Second micro-charge amount for verification.")
 /**
   * Second micro-charge amount for verification.  
  **/
  private String ccAmount2 = null;
  
  @Schema(description = "Whether terms were accepted for verification.")
 /**
   * Whether terms were accepted for verification.  
  **/
  private Boolean terms = null;
 /**
   * Card index to verify.
   * @return idx
  **/
  @JsonProperty("idx")
  @NotNull
  public Integer getIdx() {
    return idx;
  }

  public void setIdx(Integer idx) {
    this.idx = idx;
  }

  public BillingVerifyCcRequest idx(Integer idx) {
    this.idx = idx;
    return this;
  }

 /**
   * CVV code for verification.
   * @return ccCcv2
  **/
  @JsonProperty("cc_ccv2")
  @NotNull
  public String getCcCcv2() {
    return ccCcv2;
  }

  public void setCcCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
  }

  public BillingVerifyCcRequest ccCcv2(String ccCcv2) {
    this.ccCcv2 = ccCcv2;
    return this;
  }

 /**
   * First micro-charge amount for verification.
   * @return ccAmount1
  **/
  @JsonProperty("cc_amount1")
  @NotNull
  public String getCcAmount1() {
    return ccAmount1;
  }

  public void setCcAmount1(String ccAmount1) {
    this.ccAmount1 = ccAmount1;
  }

  public BillingVerifyCcRequest ccAmount1(String ccAmount1) {
    this.ccAmount1 = ccAmount1;
    return this;
  }

 /**
   * Second micro-charge amount for verification.
   * @return ccAmount2
  **/
  @JsonProperty("cc_amount2")
  @NotNull
  public String getCcAmount2() {
    return ccAmount2;
  }

  public void setCcAmount2(String ccAmount2) {
    this.ccAmount2 = ccAmount2;
  }

  public BillingVerifyCcRequest ccAmount2(String ccAmount2) {
    this.ccAmount2 = ccAmount2;
    return this;
  }

 /**
   * Whether terms were accepted for verification.
   * @return terms
  **/
  @JsonProperty("terms")
  @NotNull
  public Boolean isTerms() {
    return terms;
  }

  public void setTerms(Boolean terms) {
    this.terms = terms;
  }

  public BillingVerifyCcRequest terms(Boolean terms) {
    this.terms = terms;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BillingVerifyCcRequest {\n");
    
    sb.append("    idx: ").append(toIndentedString(idx)).append("\n");
    sb.append("    ccCcv2: ").append(toIndentedString(ccCcv2)).append("\n");
    sb.append("    ccAmount1: ").append(toIndentedString(ccAmount1)).append("\n");
    sb.append("    ccAmount2: ").append(toIndentedString(ccAmount2)).append("\n");
    sb.append("    terms: ").append(toIndentedString(terms)).append("\n");
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
