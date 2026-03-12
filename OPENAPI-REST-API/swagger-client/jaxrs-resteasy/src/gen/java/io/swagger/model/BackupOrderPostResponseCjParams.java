package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class BackupOrderPostResponseCjParams   {
  private String containerTagId = null;  private String CID = null;  private String OID = null;  private String TYPE = null;  private String itEM1 = null;  private String amT1 = null;  private Integer qtY1 = null;  private String CURRENCY = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
