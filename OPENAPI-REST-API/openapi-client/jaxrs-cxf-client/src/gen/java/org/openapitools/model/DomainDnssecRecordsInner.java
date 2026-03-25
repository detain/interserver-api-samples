package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainDnssecRecordsInner  {
  
  @ApiModelProperty(value = "")

  private String algorithm;

  @ApiModelProperty(value = "")

  private String digestType;

  @ApiModelProperty(value = "")

  private String digest;

  @ApiModelProperty(value = "")

  private String keyTag;
 /**
   * Get algorithm
   * @return algorithm
  **/
  @JsonProperty("algorithm")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainDnssecRecordsInner domainDnssecRecordsInner = (DomainDnssecRecordsInner) o;
    return Objects.equals(this.algorithm, domainDnssecRecordsInner.algorithm) &&
        Objects.equals(this.digestType, domainDnssecRecordsInner.digestType) &&
        Objects.equals(this.digest, domainDnssecRecordsInner.digest) &&
        Objects.equals(this.keyTag, domainDnssecRecordsInner.keyTag);
  }

  @Override
  public int hashCode() {
    return Objects.hash(algorithm, digestType, digest, keyTag);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

