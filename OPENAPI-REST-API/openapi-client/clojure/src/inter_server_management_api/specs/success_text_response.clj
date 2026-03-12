(ns inter-server-management-api.specs.success-text-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def success-text-response-data
  {
   (ds/req :success) boolean?
   (ds/opt :text) string?
   (ds/opt :action) string?
   })

(def success-text-response-spec
  (ds/spec
    {:name ::success-text-response
     :spec success-text-response-data}))
