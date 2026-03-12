(ns inter-server-management-api.specs.generic-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def generic-response-data
  {
   (ds/req :status) string?
   (ds/req :text) string?
   })

(def generic-response-spec
  (ds/spec
    {:name ::generic-response
     :spec generic-response-data}))
