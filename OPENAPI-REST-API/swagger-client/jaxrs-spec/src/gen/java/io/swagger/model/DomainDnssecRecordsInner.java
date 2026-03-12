package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainDnssecRecordsInner   {

  private @Valid String algorithm = null;

  private @Valid String digestType = null;

  private @Valid String digest = null;

  private @Valid String keyTag = null;

  /**
   **/
  public DomainDnssecRecordsInner algorithm(String algorithm) {
    this.algorithm = algorithm;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("algorithm")
  @NotNull

  public String getAlgorithm() {
    return algorithm;
  }
  public void setAlgorithm(String algorithm) {
    this.algorithm = algorithm;
  }

  /**
   **/
  public DomainDnssecRecordsInner digestType(String digestType) {
    this.digestType = digestType;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("digest_type")
  @NotNull

  public String getDigestType() {
    return digestType;
  }
  public void setDigestType(String digestType) {
    this.digestType = digestType;
  }

  /**
   **/
  public DomainDnssecRecordsInner digest(String digest) {
    this.digest = digest;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("digest")
  @NotNull

  public String getDigest() {
    return digest;
  }
  public void setDigest(String digest) {
    this.digest = digest;
  }

  /**
   **/
  public DomainDnssecRecordsInner keyTag(String keyTag) {
    this.keyTag = keyTag;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("key_tag")
  @NotNull

  public String getKeyTag() {
    return keyTag;
  }
  public void setKeyTag(String keyTag) {
    this.keyTag = keyTag;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainDnssecRecordsInner domainDnssecRecordsInner = (DomainDnssecRecordsInner) o;
    return Objects.equals(algorithm, domainDnssecRecordsInner.algorithm) &&
        Objects.equals(digestType, domainDnssecRecordsInner.digestType) &&
        Objects.equals(digest, domainDnssecRecordsInner.digest) &&
        Objects.equals(keyTag, domainDnssecRecordsInner.keyTag);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
