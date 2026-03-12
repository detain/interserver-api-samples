package io.swagger.model;

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

public class DomainDnssecRecordsInner   {
  
  @Schema(description = "")
  private String algorithm = null;
  
  @Schema(description = "")
  private String digestType = null;
  
  @Schema(description = "")
  private String digest = null;
  
  @Schema(description = "")
  private String keyTag = null;
 /**
   * Get algorithm
   * @return algorithm
  **/
  @JsonProperty("algorithm")
  @NotNull
  public String getAlgorithm() {
    return algorithm;
  }

  public void setAlgorithm(String algorithm) {
    this.algorithm = algorithm;
  }

  public DomainDnssecRecordsInner algorithm(String algorithm) {
    this.algorithm = algorithm;
    return this;
  }

 /**
   * Get digestType
   * @return digestType
  **/
  @JsonProperty("digest_type")
  @NotNull
  public String getDigestType() {
    return digestType;
  }

  public void setDigestType(String digestType) {
    this.digestType = digestType;
  }

  public DomainDnssecRecordsInner digestType(String digestType) {
    this.digestType = digestType;
    return this;
  }

 /**
   * Get digest
   * @return digest
  **/
  @JsonProperty("digest")
  @NotNull
  public String getDigest() {
    return digest;
  }

  public void setDigest(String digest) {
    this.digest = digest;
  }

  public DomainDnssecRecordsInner digest(String digest) {
    this.digest = digest;
    return this;
  }

 /**
   * Get keyTag
   * @return keyTag
  **/
  @JsonProperty("key_tag")
  @NotNull
  public String getKeyTag() {
    return keyTag;
  }

  public void setKeyTag(String keyTag) {
    this.keyTag = keyTag;
  }

  public DomainDnssecRecordsInner keyTag(String keyTag) {
    this.keyTag = keyTag;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainDnssecRecordsInner {\n");
    
    sb.append("    algorithm: ").append(toIndentedString(algorithm)).append("\n");
    sb.append("    digestType: ").append(toIndentedString(digestType)).append("\n");
    sb.append("    digest: ").append(toIndentedString(digest)).append("\n");
    sb.append("    keyTag: ").append(toIndentedString(keyTag)).append("\n");
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
