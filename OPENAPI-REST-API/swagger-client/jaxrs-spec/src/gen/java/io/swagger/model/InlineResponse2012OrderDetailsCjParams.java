package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse2012OrderDetailsCjParams   {

  private @Valid Integer containerTagId = null;

  private @Valid Integer CID = null;

  private @Valid String OID = null;

  private @Valid Integer TYPE = null;

  private @Valid String itEM1 = null;

  private @Valid Integer amT1 = null;

  private @Valid Integer qtY1 = null;

  private @Valid String CURRENCY = null;

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams containerTagId(Integer containerTagId) {
    this.containerTagId = containerTagId;
    return this;
  }

  
  @ApiModelProperty(example = "1684", value = "")
  @JsonProperty("containerTagId")
  @NotNull

  public Integer getContainerTagId() {
    return containerTagId;
  }
  public void setContainerTagId(Integer containerTagId) {
    this.containerTagId = containerTagId;
  }

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams CID(Integer CID) {
    this.CID = CID;
    return this;
  }

  
  @ApiModelProperty(example = "2314", value = "")
  @JsonProperty("CID")
  @NotNull

  public Integer getCID() {
    return CID;
  }
  public void setCID(Integer CID) {
    this.CID = CID;
  }

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams OID(String OID) {
    this.OID = OID;
    return this;
  }

  
  @ApiModelProperty(example = "scrub_ips12424", value = "")
  @JsonProperty("OID")
  @NotNull

  public String getOID() {
    return OID;
  }
  public void setOID(String OID) {
    this.OID = OID;
  }

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams TYPE(Integer TYPE) {
    this.TYPE = TYPE;
    return this;
  }

  
  @ApiModelProperty(example = "2242343242", value = "")
  @JsonProperty("TYPE")
  @NotNull

  public Integer getTYPE() {
    return TYPE;
  }
  public void setTYPE(Integer TYPE) {
    this.TYPE = TYPE;
  }

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams itEM1(String itEM1) {
    this.itEM1 = itEM1;
    return this;
  }

  
  @ApiModelProperty(example = "scrub_ips904", value = "")
  @JsonProperty("ITEM1")
  @NotNull

  public String getItEM1() {
    return itEM1;
  }
  public void setItEM1(String itEM1) {
    this.itEM1 = itEM1;
  }

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams amT1(Integer amT1) {
    this.amT1 = amT1;
    return this;
  }

  
  @ApiModelProperty(example = "5", value = "")
  @JsonProperty("AMT1")
  @NotNull

  public Integer getAmT1() {
    return amT1;
  }
  public void setAmT1(Integer amT1) {
    this.amT1 = amT1;
  }

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams qtY1(Integer qtY1) {
    this.qtY1 = qtY1;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "")
  @JsonProperty("QTY1")
  @NotNull

  public Integer getQtY1() {
    return qtY1;
  }
  public void setQtY1(Integer qtY1) {
    this.qtY1 = qtY1;
  }

  /**
   **/
  public InlineResponse2012OrderDetailsCjParams CURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "")
  @JsonProperty("CURRENCY")
  @NotNull

  public String getCURRENCY() {
    return CURRENCY;
  }
  public void setCURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2012OrderDetailsCjParams inlineResponse2012OrderDetailsCjParams = (InlineResponse2012OrderDetailsCjParams) o;
    return Objects.equals(containerTagId, inlineResponse2012OrderDetailsCjParams.containerTagId) &&
        Objects.equals(CID, inlineResponse2012OrderDetailsCjParams.CID) &&
        Objects.equals(OID, inlineResponse2012OrderDetailsCjParams.OID) &&
        Objects.equals(TYPE, inlineResponse2012OrderDetailsCjParams.TYPE) &&
        Objects.equals(itEM1, inlineResponse2012OrderDetailsCjParams.itEM1) &&
        Objects.equals(amT1, inlineResponse2012OrderDetailsCjParams.amT1) &&
        Objects.equals(qtY1, inlineResponse2012OrderDetailsCjParams.qtY1) &&
        Objects.equals(CURRENCY, inlineResponse2012OrderDetailsCjParams.CURRENCY);
  }

  @Override
  public int hashCode() {
    return Objects.hash(containerTagId, CID, OID, TYPE, itEM1, amT1, qtY1, CURRENCY);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2012OrderDetailsCjParams {\n");
    
    sb.append("    containerTagId: ").append(toIndentedString(containerTagId)).append("\n");
    sb.append("    CID: ").append(toIndentedString(CID)).append("\n");
    sb.append("    OID: ").append(toIndentedString(OID)).append("\n");
    sb.append("    TYPE: ").append(toIndentedString(TYPE)).append("\n");
    sb.append("    itEM1: ").append(toIndentedString(itEM1)).append("\n");
    sb.append("    amT1: ").append(toIndentedString(amT1)).append("\n");
    sb.append("    qtY1: ").append(toIndentedString(qtY1)).append("\n");
    sb.append("    CURRENCY: ").append(toIndentedString(CURRENCY)).append("\n");
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
