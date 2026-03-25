package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BackupOrderPostResponseCjParams  {
  
  @ApiModelProperty(value = "")

  private String containerTagId;

  @ApiModelProperty(value = "")

  private String CID;

  @ApiModelProperty(value = "")

  private String OID;

  @ApiModelProperty(value = "")

  private String TYPE;

  @ApiModelProperty(value = "")

  private String ITEM1;

  @ApiModelProperty(value = "")

  private String AMT1;

  @ApiModelProperty(value = "")

  private Integer QTY1;

  @ApiModelProperty(value = "")

  private String CURRENCY;
 /**
   * Get containerTagId
   * @return containerTagId
  **/
  @JsonProperty("containerTagId")
  public String getContainerTagId() {
    return containerTagId;
  }

  public void setContainerTagId(String containerTagId) {
    this.containerTagId = containerTagId;
  }

  public BackupOrderPostResponseCjParams containerTagId(String containerTagId) {
    this.containerTagId = containerTagId;
    return this;
  }

 /**
   * Get CID
   * @return CID
  **/
  @JsonProperty("CID")
  public String getCID() {
    return CID;
  }

  public void setCID(String CID) {
    this.CID = CID;
  }

  public BackupOrderPostResponseCjParams CID(String CID) {
    this.CID = CID;
    return this;
  }

 /**
   * Get OID
   * @return OID
  **/
  @JsonProperty("OID")
  public String getOID() {
    return OID;
  }

  public void setOID(String OID) {
    this.OID = OID;
  }

  public BackupOrderPostResponseCjParams OID(String OID) {
    this.OID = OID;
    return this;
  }

 /**
   * Get TYPE
   * @return TYPE
  **/
  @JsonProperty("TYPE")
  public String getTYPE() {
    return TYPE;
  }

  public void setTYPE(String TYPE) {
    this.TYPE = TYPE;
  }

  public BackupOrderPostResponseCjParams TYPE(String TYPE) {
    this.TYPE = TYPE;
    return this;
  }

 /**
   * Get ITEM1
   * @return ITEM1
  **/
  @JsonProperty("ITEM1")
  public String getITEM1() {
    return ITEM1;
  }

  public void setITEM1(String ITEM1) {
    this.ITEM1 = ITEM1;
  }

  public BackupOrderPostResponseCjParams ITEM1(String ITEM1) {
    this.ITEM1 = ITEM1;
    return this;
  }

 /**
   * Get AMT1
   * @return AMT1
  **/
  @JsonProperty("AMT1")
  public String getAMT1() {
    return AMT1;
  }

  public void setAMT1(String AMT1) {
    this.AMT1 = AMT1;
  }

  public BackupOrderPostResponseCjParams AMT1(String AMT1) {
    this.AMT1 = AMT1;
    return this;
  }

 /**
   * Get QTY1
   * @return QTY1
  **/
  @JsonProperty("QTY1")
  public Integer getQTY1() {
    return QTY1;
  }

  public void setQTY1(Integer QTY1) {
    this.QTY1 = QTY1;
  }

  public BackupOrderPostResponseCjParams QTY1(Integer QTY1) {
    this.QTY1 = QTY1;
    return this;
  }

 /**
   * Get CURRENCY
   * @return CURRENCY
  **/
  @JsonProperty("CURRENCY")
  public String getCURRENCY() {
    return CURRENCY;
  }

  public void setCURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
  }

  public BackupOrderPostResponseCjParams CURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
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
    BackupOrderPostResponseCjParams backupOrderPostResponseCjParams = (BackupOrderPostResponseCjParams) o;
    return Objects.equals(this.containerTagId, backupOrderPostResponseCjParams.containerTagId) &&
        Objects.equals(this.CID, backupOrderPostResponseCjParams.CID) &&
        Objects.equals(this.OID, backupOrderPostResponseCjParams.OID) &&
        Objects.equals(this.TYPE, backupOrderPostResponseCjParams.TYPE) &&
        Objects.equals(this.ITEM1, backupOrderPostResponseCjParams.ITEM1) &&
        Objects.equals(this.AMT1, backupOrderPostResponseCjParams.AMT1) &&
        Objects.equals(this.QTY1, backupOrderPostResponseCjParams.QTY1) &&
        Objects.equals(this.CURRENCY, backupOrderPostResponseCjParams.CURRENCY);
  }

  @Override
  public int hashCode() {
    return Objects.hash(containerTagId, CID, OID, TYPE, ITEM1, AMT1, QTY1, CURRENCY);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupOrderPostResponseCjParams {\n");
    
    sb.append("    containerTagId: ").append(toIndentedString(containerTagId)).append("\n");
    sb.append("    CID: ").append(toIndentedString(CID)).append("\n");
    sb.append("    OID: ").append(toIndentedString(OID)).append("\n");
    sb.append("    TYPE: ").append(toIndentedString(TYPE)).append("\n");
    sb.append("    ITEM1: ").append(toIndentedString(ITEM1)).append("\n");
    sb.append("    AMT1: ").append(toIndentedString(AMT1)).append("\n");
    sb.append("    QTY1: ").append(toIndentedString(QTY1)).append("\n");
    sb.append("    CURRENCY: ").append(toIndentedString(CURRENCY)).append("\n");
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

