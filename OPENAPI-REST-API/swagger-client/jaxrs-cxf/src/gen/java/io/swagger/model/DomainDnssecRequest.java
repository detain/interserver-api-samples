package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
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

/**
  * Request payload for adding DNSSEC DS records to a domain.
 **/
@Schema(description="Request payload for adding DNSSEC DS records to a domain.")
public class DomainDnssecRequest   {
  
  @Schema(description = "List of DNSSEC algorithm IDs for each record.")
 /**
   * List of DNSSEC algorithm IDs for each record.  
  **/
  private List<Integer> algorithm = null;
  
  @Schema(description = "List of digest type IDs for each record.")
 /**
   * List of digest type IDs for each record.  
  **/
  private List<Integer> digestType = null;
  
  @Schema(description = "List of hex digests for each record.")
 /**
   * List of hex digests for each record.  
  **/
  private List<String> digest = null;
  
  @Schema(description = "List of key tag values corresponding to each record.")
 /**
   * List of key tag values corresponding to each record.  
  **/
  private List<Integer> keyTag = null;
 /**
   * List of DNSSEC algorithm IDs for each record.
   * @return algorithm
  **/
  @JsonProperty("algorithm")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
