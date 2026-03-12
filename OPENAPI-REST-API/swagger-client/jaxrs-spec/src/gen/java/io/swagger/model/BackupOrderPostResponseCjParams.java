package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupOrderPostResponseCjParams   {

  private @Valid String containerTagId = null;

  private @Valid String CID = null;

  private @Valid String OID = null;

  private @Valid String TYPE = null;

  private @Valid String itEM1 = null;

  private @Valid String amT1 = null;

  private @Valid Integer qtY1 = null;

  private @Valid String CURRENCY = null;

  /**
   **/
  public BackupOrderPostResponseCjParams containerTagId(String containerTagId) {
    this.containerTagId = containerTagId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("containerTagId")
  @NotNull

  public String getContainerTagId() {
    return containerTagId;
  }
  public void setContainerTagId(String containerTagId) {
    this.containerTagId = containerTagId;
  }

  /**
   **/
  public BackupOrderPostResponseCjParams CID(String CID) {
    this.CID = CID;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("CID")
  @NotNull

  public String getCID() {
    return CID;
  }
  public void setCID(String CID) {
    this.CID = CID;
  }

  /**
   **/
  public BackupOrderPostResponseCjParams OID(String OID) {
    this.OID = OID;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public BackupOrderPostResponseCjParams TYPE(String TYPE) {
    this.TYPE = TYPE;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("TYPE")
  @NotNull

  public String getTYPE() {
    return TYPE;
  }
  public void setTYPE(String TYPE) {
    this.TYPE = TYPE;
  }

  /**
   **/
  public BackupOrderPostResponseCjParams itEM1(String itEM1) {
    this.itEM1 = itEM1;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public BackupOrderPostResponseCjParams amT1(String amT1) {
    this.amT1 = amT1;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("AMT1")
  @NotNull

  public String getAmT1() {
    return amT1;
  }
  public void setAmT1(String amT1) {
    this.amT1 = amT1;
  }

  /**
   **/
  public BackupOrderPostResponseCjParams qtY1(Integer qtY1) {
    this.qtY1 = qtY1;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public BackupOrderPostResponseCjParams CURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
    BackupOrderPostResponseCjParams backupOrderPostResponseCjParams = (BackupOrderPostResponseCjParams) o;
    return Objects.equals(containerTagId, backupOrderPostResponseCjParams.containerTagId) &&
        Objects.equals(CID, backupOrderPostResponseCjParams.CID) &&
        Objects.equals(OID, backupOrderPostResponseCjParams.OID) &&
        Objects.equals(TYPE, backupOrderPostResponseCjParams.TYPE) &&
        Objects.equals(itEM1, backupOrderPostResponseCjParams.itEM1) &&
        Objects.equals(amT1, backupOrderPostResponseCjParams.amT1) &&
        Objects.equals(qtY1, backupOrderPostResponseCjParams.qtY1) &&
        Objects.equals(CURRENCY, backupOrderPostResponseCjParams.CURRENCY);
  }

  @Override
  public int hashCode() {
    return Objects.hash(containerTagId, CID, OID, TYPE, itEM1, amT1, qtY1, CURRENCY);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupOrderPostResponseCjParams {\n");
    
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
