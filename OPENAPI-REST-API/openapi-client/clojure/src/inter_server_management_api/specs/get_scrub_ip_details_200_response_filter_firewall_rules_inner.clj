(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall-rules-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-filter-firewall-rules-inner-data
  {
   (ds/opt :id) string?
   (ds/opt :source_ip) string?
   (ds/opt :destination_ip) string?
   (ds/opt :protocol_id) string?
   (ds/opt :source_port) string?
   (ds/opt :destination_port) string?
   (ds/opt :xdp_action) string?
   (ds/opt :global_drop) string?
   })

(def get-scrub-ip-details-200-response-filter-firewall-rules-inner-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-filter-firewall-rules-inner
     :spec get-scrub-ip-details-200-response-filter-firewall-rules-inner-data}))
