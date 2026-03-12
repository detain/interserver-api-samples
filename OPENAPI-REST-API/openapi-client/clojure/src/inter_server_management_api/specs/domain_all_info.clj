(ns inter-server-management-api.specs.domain-all-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-all-info-attributes :refer :all]
            )
  (:import (java.io File)))


(def domain-all-info-data
  {
   (ds/opt :_OPS_version) string?
   (ds/opt :attributes) domain-all-info-attributes-spec
   (ds/opt :object) string?
   (ds/opt :protocol) string?
   (ds/opt :response_text) string?
   (ds/opt :response_code) string?
   (ds/opt :action) string?
   (ds/opt :is_success) string?
   })

(def domain-all-info-spec
  (ds/spec
    {:name ::domain-all-info
     :spec domain-all-info-data}))
