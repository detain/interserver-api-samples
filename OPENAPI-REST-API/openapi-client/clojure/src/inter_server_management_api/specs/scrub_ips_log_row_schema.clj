(ns inter-server-management-api.specs.scrub-ips-log-row-schema
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def scrub-ips-log-row-schema-data
  {
   (ds/opt :date) string?
   (ds/opt :filter) string?
   (ds/opt :blocked_ip) string?
   (ds/opt :target_ip) string?
   (ds/opt :target_port) float?
   (ds/opt :protocol) string?
   (ds/opt :byte_count) float?
   (ds/opt :xdp_action) string?
   })

(def scrub-ips-log-row-schema-spec
  (ds/spec
    {:name ::scrub-ips-log-row-schema
     :spec scrub-ips-log-row-schema-data}))
