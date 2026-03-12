package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Request payload for adding DNSSEC DS records to a domain.")

public class DomainDnssecRequest   {
  private List<Integer> algorithm = new ArrayList<Integer>();
  private List<Integer> digestType = new ArrayList<Integer>();
  private List<String> digest = new ArrayList<String>();
  private List<Integer> keyTag = new ArrayList<Integer>();

  /**
   * List of DNSSEC algorithm IDs for each record.
   **/
  
  @Schema(description = "List of DNSSEC algorithm IDs for each record.")
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
  
  @Schema(description = "List of digest type IDs for each record.")
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
  
  @Schema(description = "List of hex digests for each record.")
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
  
  @Schema(description = "List of key tag values corresponding to each record.")
  @JsonProperty("key_tag")
  @NotNull
  public List<Integer> getKeyTag() {
    return keyTag;
  }
  public void setKeyTag(List<Integer> keyTag) {
    this.keyTag = keyTag;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
