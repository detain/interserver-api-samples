(ns inter-server-management-api.specs.website-service-master
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def website-service-master-data
  {
   (ds/opt :website_id) string?
   (ds/opt :website_name) string?
   (ds/opt :website_ip) string?
   (ds/opt :website_type) string?
   (ds/opt :website_available) string?
   (ds/opt :website_hdsize) string?
   (ds/opt :website_hdfree) string?
   (ds/opt :website_load) string?
   (ds/opt :website_last_update) string?
   (ds/opt :website_max_sites) string?
   (ds/opt :website_order) string?
   (ds/opt :website_partitions) string?
   (ds/opt :website_dns1) string?
   (ds/opt :website_dns2) string?
   })

(def website-service-master-spec
  (ds/spec
    {:name ::website-service-master
     :spec website-service-master-data}))
