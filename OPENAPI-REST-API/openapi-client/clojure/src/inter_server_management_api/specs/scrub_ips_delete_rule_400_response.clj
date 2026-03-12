(ns inter-server-management-api.specs.scrub-ips-delete-rule-400-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def scrub-ips-delete-rule-400-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   })

(def scrub-ips-delete-rule-400-response-spec
  (ds/spec
    {:name ::scrub-ips-delete-rule-400-response
     :spec scrub-ips-delete-rule-400-response-data}))
