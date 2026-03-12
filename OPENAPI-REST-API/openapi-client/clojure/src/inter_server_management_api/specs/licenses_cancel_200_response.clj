(ns inter-server-management-api.specs.licenses-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def licenses-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def licenses-cancel-200-response-spec
  (ds/spec
    {:name ::licenses-cancel-200-response
     :spec licenses-cancel-200-response-data}))
