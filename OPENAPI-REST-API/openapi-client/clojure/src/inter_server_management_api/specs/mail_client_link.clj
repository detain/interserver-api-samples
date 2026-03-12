(ns inter-server-management-api.specs.mail-client-link
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-client-link-data
  {
   (ds/opt :label) string?
   (ds/opt :link) string?
   (ds/opt :icon) string?
   (ds/opt :icon_text) string?
   (ds/opt :help_text) string?
   (ds/opt :other_attr) string?
   })

(def mail-client-link-spec
  (ds/spec
    {:name ::mail-client-link
     :spec mail-client-link-data}))
