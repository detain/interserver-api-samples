package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class DomainDnssecRecordsInner   {
  @JsonProperty("algorithm")
  private String algorithm = null;
  @JsonProperty("digest_type")
  private String digestType = null;
  @JsonProperty("digest")
  private String digest = null;
  @JsonProperty("key_tag")
  private String keyTag = null;
  /**
   **/
  public DomainDnssecRecordsInner algorithm(String algorithm) {
    this.algorithm = algorithm;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("algorithm")
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

  
  @Schema(description = "")
  @JsonProperty("digest_type")
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

  
  @Schema(description = "")
  @JsonProperty("digest")
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

  
  @Schema(description = "")
  @JsonProperty("key_tag")
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
