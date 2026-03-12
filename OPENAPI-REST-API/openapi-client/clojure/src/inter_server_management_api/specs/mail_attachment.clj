(ns inter-server-management-api.specs.mail-attachment
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-attachment-data
  {
   (ds/req :filename) string?
   (ds/req :data) string?
   })

(def mail-attachment-spec
  (ds/spec
    {:name ::mail-attachment
     :spec mail-attachment-data}))
