package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request payload for adding DNSSEC DS records to a domain.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Request payload for adding DNSSEC DS records to a domain.")

public class DomainDnssecRequest   {

  private @Valid List<Integer> algorithm = new ArrayList<Integer>();

  private @Valid List<Integer> digestType = new ArrayList<Integer>();

  private @Valid List<String> digest = new ArrayList<String>();

  private @Valid List<Integer> keyTag = new ArrayList<Integer>();

  /**
   * List of DNSSEC algorithm IDs for each record.
   **/
  public DomainDnssecRequest algorithm(List<Integer> algorithm) {
    this.algorithm = algorithm;
    return this;
  }

  
  @ApiModelProperty(value = "List of DNSSEC algorithm IDs for each record.")
  @JsonProperty("algorithm")
  @NotNull

  public List<Integer> getAlgorithm() {
    return algorithm;
  }
  public void setAlgorithm(List<Integer> algorithm) {
    this.algorithm = algorithm;
  }

  /**
   * List of digest type IDs for each record.
   **/
  public DomainDnssecRequest digestType(List<Integer> digestType) {
    this.digestType = digestType;
    return this;
  }

  
  @ApiModelProperty(value = "List of digest type IDs for each record.")
  @JsonProperty("digest_type")
  @NotNull

  public List<Integer> getDigestType() {
    return digestType;
  }
  public void setDigestType(List<Integer> digestType) {
    this.digestType = digestType;
  }

  /**
   * List of hex digests for each record.
   **/
  public DomainDnssecRequest digest(List<String> digest) {
    this.digest = digest;
    return this;
  }

  
  @ApiModelProperty(value = "List of hex digests for each record.")
  @JsonProperty("digest")
  @NotNull

  public List<String> getDigest() {
    return digest;
  }
  public void setDigest(List<String> digest) {
    this.digest = digest;
  }

  /**
   * List of key tag values corresponding to each record.
   **/
  public DomainDnssecRequest keyTag(List<Integer> keyTag) {
    this.keyTag = keyTag;
    return this;
  }

  
  @ApiModelProperty(value = "List of key tag values corresponding to each record.")
  @JsonProperty("key_tag")
  @NotNull

  public List<Integer> getKeyTag() {
    return keyTag;
  }
  public void setKeyTag(List<Integer> keyTag) {
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
    DomainDnssecRequest domainDnssecRequest = (DomainDnssecRequest) o;
    return Objects.equals(algorithm, domainDnssecRequest.algorithm) &&
        Objects.equals(digestType, domainDnssecRequest.digestType) &&
        Objects.equals(digest, domainDnssecRequest.digest) &&
        Objects.equals(keyTag, domainDnssecRequest.keyTag);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
