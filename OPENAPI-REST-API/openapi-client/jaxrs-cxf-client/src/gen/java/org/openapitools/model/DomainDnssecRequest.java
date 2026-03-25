package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Request payload for adding DNSSEC DS records to a domain.
 */
@ApiModel(description="Request payload for adding DNSSEC DS records to a domain.")

public class DomainDnssecRequest  {
  
 /**
  * List of DNSSEC algorithm IDs for each record.
  */
  @ApiModelProperty(value = "List of DNSSEC algorithm IDs for each record.")

  private List<Integer> algorithm = new ArrayList<>();

 /**
  * List of digest type IDs for each record.
  */
  @ApiModelProperty(value = "List of digest type IDs for each record.")

  private List<Integer> digestType = new ArrayList<>();

 /**
  * List of hex digests for each record.
  */
  @ApiModelProperty(value = "List of hex digests for each record.")

  private List<String> digest = new ArrayList<>();

 /**
  * List of key tag values corresponding to each record.
  */
  @ApiModelProperty(value = "List of key tag values corresponding to each record.")

  private List<Integer> keyTag = new ArrayList<>();
 /**
   * List of DNSSEC algorithm IDs for each record.
   * @return algorithm
  **/
  @JsonProperty("algorithm")
  public List<Integer> getAlgorithm() {
    return algorithm;
  }

  public void setAlgorithm(List<Integer> algorithm) {
    this.algorithm = algorithm;
  }

  public DomainDnssecRequest algorithm(List<Integer> algorithm) {
    this.algorithm = algorithm;
    return this;
  }

  public DomainDnssecRequest addAlgorithmItem(Integer algorithmItem) {
    this.algorithm.add(algorithmItem);
    return this;
  }

 /**
   * List of digest type IDs for each record.
   * @return digestType
  **/
  @JsonProperty("digest_type")
  public List<Integer> getDigestType() {
    return digestType;
  }

  public void setDigestType(List<Integer> digestType) {
    this.digestType = digestType;
  }

  public DomainDnssecRequest digestType(List<Integer> digestType) {
    this.digestType = digestType;
    return this;
  }

  public DomainDnssecRequest addDigestTypeItem(Integer digestTypeItem) {
    this.digestType.add(digestTypeItem);
    return this;
  }

 /**
   * List of hex digests for each record.
   * @return digest
  **/
  @JsonProperty("digest")
  public List<String> getDigest() {
    return digest;
  }

  public void setDigest(List<String> digest) {
    this.digest = digest;
  }

  public DomainDnssecRequest digest(List<String> digest) {
    this.digest = digest;
    return this;
  }

  public DomainDnssecRequest addDigestItem(String digestItem) {
    this.digest.add(digestItem);
    return this;
  }

 /**
   * List of key tag values corresponding to each record.
   * @return keyTag
  **/
  @JsonProperty("key_tag")
  public List<Integer> getKeyTag() {
    return keyTag;
  }

  public void setKeyTag(List<Integer> keyTag) {
    this.keyTag = keyTag;
  }

  public DomainDnssecRequest keyTag(List<Integer> keyTag) {
    this.keyTag = keyTag;
    return this;
  }

  public DomainDnssecRequest addKeyTagItem(Integer keyTagItem) {
    this.keyTag.add(keyTagItem);
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
    DomainDnssecRequest domainDnssecRequest = (DomainDnssecRequest) o;
    return Objects.equals(this.algorithm, domainDnssecRequest.algorithm) &&
        Objects.equals(this.digestType, domainDnssecRequest.digestType) &&
        Objects.equals(this.digest, domainDnssecRequest.digest) &&
        Objects.equals(this.keyTag, domainDnssecRequest.keyTag);
  }

  @Override
  public int hashCode() {
    return Objects.hash(algorithm, digestType, digest, keyTag);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainDnssecRequest {\n");
    
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

